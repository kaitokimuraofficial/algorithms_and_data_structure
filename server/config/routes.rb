Rails.application.routes.draw do
  
  if Rails.env.development?
    mount GraphiQL::Rails::Engine, at: "/graphiql", graphql_path: "/graphql"
  end
  
  root  'pages#home'

  post  'graphql',  to: 'graphql#execute'

  get   'signup',    to: 'users#new'
  post  'signup',    to: 'users#create'

  get    'login',    to: 'sessions#new'
  post   'login',    to: 'sessions#create'
  get    'logout',   to: 'sessions#destroy'
  
  get    'allpost',  to: 'microposts#index'

  
  resources :users do
    member do 
      get 'post', to: 'microposts#new'
      get :following, :followers
      resources :microposts
    end
  end
  
  resources :users
  resources :microposts
  resources :relationships,  only: [:create, :destroy]
end

Rails.application.routes.draw do
  root  'pages#home'

  get   'signup',    to: "users#new"
  post  'signup',    to: "users#create"

  get    "login",    to: "sessions#new"
  post   "login",    to: "sessions#create"
  get    "logout",   to: "sessions#destroy"
  
  get    "allpost",  to: "microposts#index"

  
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

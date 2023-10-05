Rails.application.routes.draw do
  root  'pages#home'

  get   'signup',    to: "users#new"
  post  'signup',    to: "users#create"

  get    "login",   to: "sessions#new"
  post   "login",   to: "sessions#create"
  delete "logout",  to: "sessions#destroy"
  
  get    "post",     to: "microposts#new"
  post   "post",     to: "microposts#create"

  get "allpost", to: "microposts#index"

  

  resources :users do
    member do 
      get 'post', to: 'microposts#new'
      get :following, :followers
    end
  end
  resources :microposts
  resources :relationships,  only: [:create, :destroy]
end

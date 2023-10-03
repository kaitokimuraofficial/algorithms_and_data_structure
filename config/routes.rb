Rails.application.routes.draw do
  root "users#index"
  
  get "post", to: "microposts#new"
  post "post", to: "microposts#create"

  get "allpost", to: "microposts#index"

  resources :users do
    member do 
      get 'post', to: 'microposts#new'
    end
  end
  resources :microposts
end

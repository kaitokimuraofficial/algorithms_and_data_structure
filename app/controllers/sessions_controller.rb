class SessionsController < ApplicationController
  def new
  end

  def create
    user = User.find_by(email: params[:session][:email].downcase)
    reset_session 
    log_in user
    redirect_to user


  end

  def destroy
    session[:user_id] = nil
    redirect_to root_url
  end
end

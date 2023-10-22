class SessionsController < ApplicationController
  def new
  end

  def create
    logger.debug(params)
    user = User.find_by(email: params[:session][:email].downcase)
    reset_session 
    if user.nil?
      redirect_to signup_url
    else
      log_in user
      redirect_to root_url
    end


  end

  def destroy
    session[:user_id] = nil
    redirect_to root_url
  end
end

class PagesController < ApplicationController
  def home
    if current_user.nil?
    else
      following_users = current_user.following

      @microposts = Micropost.where(user_id: following_users.pluck(:id))
      @mypost = current_user.microposts
      @microposts += @mypost
    end
  end
end

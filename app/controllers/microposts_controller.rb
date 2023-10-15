class MicropostsController < ApplicationController
    def new
        logger.debug(params)
        @micropost = Micropost.new(user_id: params[:id])
    end

    def show
        @micropost = Micropost.find(params[:id])
        @user = User.find(@micropost.user_id)
        if current_user == @user or current_user.following?(@user)
        else
            redirect_to root_url
        end
    end

    def index 
        @microposts = Micropost.all
    end

    def create 
        logger.debug(params)
        @micropost = Micropost.new(micropost_params)
        @micropost[:user_id] = current_user.id
        if @micropost.save
            redirect_to root_path
        else
            render 'new'
        end
    end

    private    
    # Only allow a list of trusted parameters through.
    def micropost_params
        params.require(:micropost).permit(:content, :micropost_image)
    end
end

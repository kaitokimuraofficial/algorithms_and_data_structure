class MicropostsController < ApplicationController
    def new
        logger.debug(params)
        @micropost = Micropost.new(user_id: params[:id])
    end

    def index 
        @microposts = Micropost.all
    end

    def create 
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
        params.require(:micropost).permit(:content)
    end
end

class MicropostsController < ApplicationController
    def new
        @micropost = Micropost.new(user_id: params[:id])
    end

    def index 
        @microposts = Micropost.all
    end

    def create 
        @micropost = Micropost.new(micropost_params)
        if @micropost.save
            redirect_to root_path
        else
            render 'new'
        end
    end

    private    
    # Only allow a list of trusted parameters through.
    def micropost_params
        params.require(:micropost).permit(:content, :user_id)
    end
end

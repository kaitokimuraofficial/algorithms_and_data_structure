module UsersHelper
    def user_id_to_name(user_id)
        user = User.find(user_id)
        if !user.nil?
            user.name
        end
    end
end

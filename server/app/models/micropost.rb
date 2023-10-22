class Micropost < ApplicationRecord
  belongs_to :user
  has_one_attached :micropost_image

  def get_mp_image
    unless micropost_image.attached?
      file_path = Rails.root.join('app/assets/images/no_image.jpeg')
      micropost_image.attach(io: File.open(file_path), filename: 'default-image.jpeg', content_type: 'image/jpeg')
    end
    micropost_image
  end
end

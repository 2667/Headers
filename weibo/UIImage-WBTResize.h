//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (WBTResize)
+ (id)JPEGRepresentationSavedMetadataWithImage:(id)arg1 maxSize:(double)arg2;
+ (id)wbt_imageWithPureColorBackgroundImage:(struct CGColor *)arg1 withSize:(struct CGSize)arg2;
+ (id)wbt_metaDataWithoutLoadingWithPath:(id)arg1;
+ (struct CGSize)wbt_imageSizeWithoutLoadingWithPath:(id)arg1;
+ (id)wbt_cropImageWithSourceImage:(id)arg1 rect:(struct CGRect)arg2;
+ (id)wbt_resizeImageToMaxSize:(double)arg1 sourcePath:(id)arg2;
- (id)rotatedImageWithtransform:(struct CGAffineTransform)arg1;
- (id)rotatedImageWithtransform:(struct CGAffineTransform)arg1 croppedToRect:(struct CGRect)arg2;
- (id)customRotateImageWithtransform:(struct CGAffineTransform)arg1 croppedToRect:(struct CGRect)arg2;
- (id)wbt_imageWithSize:(struct CGSize)arg1;
- (id)wbt_resizedImageWithCompressionLevelHighResolution;
- (struct CGAffineTransform)wbt_transformForOrientation:(struct CGSize)arg1;
- (id)wbt_resizedImage:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2 drawTransposed:(_Bool)arg3 interpolationQuality:(int)arg4 withBackgroundColor:(struct CGColor *)arg5;
- (id)wbt_resizedImage:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2 drawTransposed:(_Bool)arg3 interpolationQuality:(int)arg4;
- (id)wbt_imageByScalingAndCroppingForSize:(struct CGSize)arg1;
- (id)wbt_resizedImageWithContentMode:(long long)arg1 bounds:(struct CGSize)arg2 interpolationQuality:(int)arg3;
- (id)wbt_resizedImage:(struct CGSize)arg1 interpolationQuality:(int)arg2 withBackgroundColor:(struct CGColor *)arg3;
- (id)wbt_resizedImage:(struct CGSize)arg1 interpolationQuality:(int)arg2;
- (id)wbt_thumbnailImage:(long long)arg1 transparentBorder:(unsigned long long)arg2 cornerRadius:(unsigned long long)arg3 interpolationQuality:(int)arg4;
- (id)wbt_croppedImage:(struct CGRect)arg1;
- (id)wbt_screenResizedImage;
@end


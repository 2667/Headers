//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIImageView;

@protocol DWImgLoaderProtocol <NSObject>
- (UIImageView *)generateImageViewForGIFNamed:(NSString *)arg1 frame:(struct CGRect)arg2;
- (void)setImageByURL:(NSString *)arg1 imageView:(UIImageView *)arg2 userInfo:(NSDictionary *)arg3 completed:(void (^)(UIImage *, NSError *, _Bool))arg4;
@end

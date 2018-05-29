//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KLKParamObject.h"

@class KLKLinkObject, NSNumber, NSString, NSURL;

@interface KLKContentObject : KLKParamObject
{
    NSString *_title;
    NSURL *_imageURL;
    NSNumber *_imageWidth;
    NSNumber *_imageHeight;
    NSString *_desc;
    KLKLinkObject *_link;
}

+ (id)contentObjectWithBuilder:(id)arg1;
+ (id)contentObjectWithBuilderBlock:(CDUnknownBlockType)arg1;
+ (id)contentObjectWithTitle:(id)arg1 imageURL:(id)arg2 link:(id)arg3;
@property(copy, nonatomic) KLKLinkObject *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)JSONObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBuilder:(id)arg1;
- (id)initWithTitle:(id)arg1 imageURL:(id)arg2 link:(id)arg3;

@end


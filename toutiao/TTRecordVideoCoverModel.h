//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HTSVideoDataClipRange, UIImage;

@interface TTRecordVideoCoverModel : NSObject
{
    HTSVideoDataClipRange *_range;
    long long _index;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) HTSVideoDataClipRange *range; // @synthesize range=_range;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, NSDictionary, NSURL, UIImage;

@interface VSRecordSessionSegment : NSObject
{
    AVAsset *_asset;
    UIImage *_thumbnail;
    UIImage *_lastImage;
    NSURL *_url;
    NSDictionary *_info;
}

+ (id)segmentWithURL:(id)arg1 info:(id)arg2;
+ (id)segmentURLForFilename:(id)arg1 andDirectory:(id)arg2;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool fileUrlExists;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) float frameRate;
@property(readonly, nonatomic) UIImage *lastImage;
@property(readonly, nonatomic) UIImage *thumbnail;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) AVAsset *asset;
- (void)deleteFile;
- (id)initWithURL:(id)arg1 info:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AWEVideoMusicManager : NSObject
{
}

+ (void)requestCollectingAWEMusicWithID:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestBodydanceMusicsWithCursor:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)refreshMusicItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestCollectingMusicsWithCursor:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestMusicItemWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)downloadVideoWithURLGoup:(id)arg1 destinationURL:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchLocalURLForMusic:(id)arg1 withProgress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)localURLForMusic:(id)arg1;

@end


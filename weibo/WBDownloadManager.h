//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBDownloadManager : NSObject
{
}

+ (_Bool)checkPathWithCreatedWhenNotExit:(id)arg1;
+ (id)sharedManager;
- (void)removeFilterData:(id)arg1;
- (void)removeStickerData:(id)arg1;
- (id)getDownloadRequest:(id)arg1;
- (void)downloadZipURL:(id)arg1 forBorder:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)downloadZipURL:(id)arg1 forSticker:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)downloadZipURL:(id)arg1 forSticker:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)downloadSignURL:(id)arg1 forSticker:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)downloadIconURL:(id)arg1 forSticker:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)downloadZipURL:(id)arg1 forFilter:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)isStickerDownloading:(id)arg1;
- (id)downloadRequestDictionaryIOQueue;
- (id)downloadRequestDictionary;
- (id)downloadQueue;

@end


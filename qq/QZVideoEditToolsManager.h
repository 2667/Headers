//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface QZVideoEditToolsManager : NSObject
{
    NSOperationQueue *_processQueue;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSOperationQueue *processQueue; // @synthesize processQueue=_processQueue;
- (void).cxx_destruct;
- (void)editVideoWithAsset:(id)arg1 outPutFilePath:(id)arg2 videoEditInfo:(id)arg3 videoCompParam:(id)arg4 completeHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6;
- (id)init;
- (void)cancelAllComposeOperations;

@end

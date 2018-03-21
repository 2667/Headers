//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TBUploadHelper : NSObject
{
    NSMutableArray *_uploadTasks;
}

+ (id)sharedHelper;
@property(retain, nonatomic) NSMutableArray *uploadTasks; // @synthesize uploadTasks=_uploadTasks;
- (void).cxx_destruct;
- (id)fileName:(id)arg1;
- (id)filePath:(id)arg1;
- (float)fileSize:(id)arg1;
- (void)finishTask:(id)arg1;
- (void)cancelUpload:(id)arg1;
- (void)doUpload:(id)arg1;
- (void)nextUpload;
- (void)completeUpload;
- (void)uploadServiceWithFilePath:(id)arg1 AsyncOnComplete:(CDUnknownBlockType)arg2 Progress:(CDUnknownBlockType)arg3 OnError:(CDUnknownBlockType)arg4;
- (void)uploadServiceWithFileData:(id)arg1 AsyncOnComplete:(CDUnknownBlockType)arg2 Progress:(CDUnknownBlockType)arg3 OnError:(CDUnknownBlockType)arg4;
- (id)init;

@end

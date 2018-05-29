//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAudioProvider.h"

@class NSURL, WBAudioHTTPRequest;

@interface P_WBAudioRemoteProvider : WBAudioProvider
{
    WBAudioHTTPRequest *_request;
    NSURL *_audioFileURL;
    struct OpaqueAudioFileStreamID *_audioFileStreamID;
    _Bool _requiresCompleteFile;
    _Bool _readyToProducePackets;
    _Bool _requestCompleted;
}

- (_Bool)isFinished;
- (void).cxx_destruct;
- (id)p_fallbackTypeIDs;
- (void)p_closeAudioFileStream;
- (void)p_openAudioFileStreamWithFileTypeHint:(unsigned int)arg1;
- (void)p_openAudioFileStream;
- (void)p_handleAudioFileStreamPackets:(const void *)arg1 numberOfBytes:(unsigned int)arg2 numberOfPackets:(unsigned int)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4;
- (void)p_handleAudioFileStreamProperty:(unsigned int)arg1;
- (void)p_createRequest;
- (void)p_requestDidReceiveData:(id)arg1;
- (void)p_requestDidReceiveResponse;
- (void)p_requestDidReportProgress:(double)arg1;
- (void)p_requestDidComplete;
- (void)p_invokeEventBlock;
- (id)_initWithSource:(id)arg1;
- (_Bool)isReady;
- (unsigned long long)downloadSpeed;
- (id)sourceExtension;
- (void)dealloc;

@end


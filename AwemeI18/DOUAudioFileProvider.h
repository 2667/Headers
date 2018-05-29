//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;
@protocol DOUAudioFile;

@interface DOUAudioFileProvider : NSObject
{
    id <DOUAudioFile> _audioFile;
    CDUnknownBlockType _eventBlock;
    NSString *_cachedPath;
    NSURL *_cachedURL;
    NSString *_mimeType;
    NSString *_fileExtension;
    NSString *_sha256;
    NSData *_mappedData;
    unsigned long long _expectedLength;
    unsigned long long _receivedLength;
    _Bool _failed;
}

+ (void)setHintWithAudioFile:(id)arg1;
+ (id)fileProviderWithAudioFile:(id)arg1;
+ (id)_fileProviderWithAudioFile:(id)arg1;
@property(readonly, nonatomic, getter=isFailed) _Bool failed; // @synthesize failed=_failed;
@property(readonly, nonatomic) unsigned long long receivedLength; // @synthesize receivedLength=_receivedLength;
@property(readonly, nonatomic) unsigned long long expectedLength; // @synthesize expectedLength=_expectedLength;
@property(readonly, nonatomic) NSData *mappedData; // @synthesize mappedData=_mappedData;
@property(readonly, nonatomic) NSString *sha256; // @synthesize sha256=_sha256;
@property(readonly, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, nonatomic) NSURL *cachedURL; // @synthesize cachedURL=_cachedURL;
@property(readonly, nonatomic) NSString *cachedPath; // @synthesize cachedPath=_cachedPath;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(readonly, nonatomic) id <DOUAudioFile> audioFile; // @synthesize audioFile=_audioFile;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, nonatomic) unsigned long long downloadSpeed;
- (id)_initWithAudioFile:(id)arg1;

@end


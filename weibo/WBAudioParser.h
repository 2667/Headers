//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSURL, WBAudioProvider;
@protocol WBAudioSource;

@interface WBAudioParser : NSObject
{
    WBAudioProvider *_provider;
    struct OpaqueAudioFileID *_fileID;
    struct AudioStreamBasicDescription _fileFormat;
    unsigned long long _bitRate;
    unsigned long long _dataOffset;
    unsigned long long _estimatedDuration;
}

+ (id)parserWithProvider:(id)arg1;
@property(readonly, nonatomic) unsigned long long estimatedDuration; // @synthesize estimatedDuration=_estimatedDuration;
@property(readonly, nonatomic) unsigned long long dataOffset; // @synthesize dataOffset=_dataOffset;
@property(readonly, nonatomic) unsigned long long bitRate; // @synthesize bitRate=_bitRate;
@property(readonly, nonatomic) struct AudioStreamBasicDescription fileFormat; // @synthesize fileFormat=_fileFormat;
@property(readonly, nonatomic) struct OpaqueAudioFileID *fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) WBAudioProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (_Bool)p_fillMiscProperties;
- (_Bool)p_fillFileFormat;
- (id)p_fallbackTypeIDs;
- (_Bool)p_openWithFallbacks;
- (_Bool)p_openWithFileTypeHint:(unsigned int)arg1;
- (void)dealloc;
- (void)close;
- (_Bool)open;
- (id)initWithProvider:(id)arg1;
@property(readonly, nonatomic, getter=isOpened) _Bool opened;
@property(readonly, nonatomic) NSData *mappedData;
@property(readonly, nonatomic) NSURL *cachedURL;
@property(readonly, nonatomic) id <WBAudioSource> audioSource;

@end


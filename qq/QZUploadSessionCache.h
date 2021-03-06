//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface QZUploadSessionCache : NSObject
{
    NSMutableDictionary *_sessionMap;
    NSMutableDictionary *_preUploadSessionMap;
    NSString *_sessionLocalFilePath;
    NSString *_flowLocalFilePath;
    NSMutableDictionary *_flowMap;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableDictionary *flowMap; // @synthesize flowMap=_flowMap;
@property(retain, nonatomic) NSString *flowLocalFilePath; // @synthesize flowLocalFilePath=_flowLocalFilePath;
@property(retain, nonatomic) NSString *sessionLocalFilePath; // @synthesize sessionLocalFilePath=_sessionLocalFilePath;
@property(retain, nonatomic) NSMutableDictionary *preUploadSessionMap; // @synthesize preUploadSessionMap=_preUploadSessionMap;
@property(retain, nonatomic) NSMutableDictionary *sessionMap; // @synthesize sessionMap=_sessionMap;
- (void).cxx_destruct;
- (long long)genAndRestoreFlowForKey:(id)arg1;
- (long long)queryFlowForPacket:(id)arg1;
- (void)clearSessionCache;
- (void)writeToFile;
- (id)preUploadKeyForPacket:(id)arg1;
- (id)keyForPacket:(id)arg1;
- (id)queryPreUploadSessionOfPacket:(id)arg1;
- (id)querySessionOfPacket:(id)arg1;
- (void)restoreSessionsOfPackets:(id)arg1;
- (id)init;

@end


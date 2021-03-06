//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, VASLockDictionary;
@protocol OS_dispatch_queue;

@interface CustomFaceManager : NSObject
{
    NSString *_uin;
    NSMutableArray *_emojiHistoryInfoList;
    NSDictionary *_customFaceMd5Dict;
    NSDictionary *_customFaceOrgMd5Dict;
    _Bool _isFaceChange;
    _Bool _isFaceLandscapeChange;
    _Bool _groupFaceChanged;
    NSObject<OS_dispatch_queue> *_deleteResourceQueue;
    NSObject<OS_dispatch_queue> *_loadImageQueue;
    VASLockDictionary *_emojiToStoreDictionry;
}

+ (id)getInstance;
@property(retain, nonatomic) VASLockDictionary *emojiToStoreDictionry; // @synthesize emojiToStoreDictionry=_emojiToStoreDictionry;
@property _Bool groupFaceChanged; // @synthesize groupFaceChanged=_groupFaceChanged;
@property _Bool FaceLandscapeChange; // @synthesize FaceLandscapeChange=_isFaceLandscapeChange;
@property _Bool FaceChange; // @synthesize FaceChange=_isFaceChange;
- (void)deleteCustomFaceRecord:(id)arg1;
- (void)syncEmojiHistoryInfosToLocal;
- (void)deleteCustomFaceWithEmojiHistoryInfo:(id)arg1;
- (void)handleEmojiUploadResultNotification:(id)arg1;
- (void)addCustomFaceWithEmojiHistoryInfo:(id)arg1;
- (id)getPictureHistoryInfo:(id)arg1;
- (id)getHistoryInfoWithFilePath:(id)arg1;
- (void)initEmojiHistoryInfos;
- (_Bool)fixEmojiSubtype:(id)arg1;
- (id)getLoadImageQueue;
- (_Bool)isFaceLandscapeChange;
- (_Bool)isFaceChange;
- (void)reloadCustomFaceList;
- (id)getCustomFaceEmojiHistoryInfoWithPath:(id)arg1;
- (void)loadCell:(id)arg1 withData:(id)arg2;
- (void)customFaceCellListWithResult:(CDUnknownBlockType)arg1;
- (id)getCustomFaceHistoryInfoList;
- (int)getRoamEmojiCountInHistorys;
- (void)dealWithOverFlowHistorys;
- (void)dealWithRoamInfosEnd;
- (_Bool)dealWithRoamInfos:(id)arg1;
- (void)updateHistoryInfo:(id)arg1 isSyncToLocal:(_Bool)arg2;
- (void)updateHistoryInfo:(id)arg1;
- (void)deleteRoamInfos:(id)arg1;
- (void)setUin:(long long)arg1;
- (void)deleteUin;
- (void)dealloc;
- (id)init;

@end


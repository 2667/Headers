//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MFScene : NSObject
{
    NSString *_sceneName;
    NSMutableArray *_originDataArray;
    NSMutableArray *_dataArray;
    NSMutableDictionary *_bodyLayoutDict;
    NSString *_manifest;
    NSDictionary *_tplIdMap;
    NSString *_appId;
    NSString *_biz;
    NSString *_filePath;
    NSMutableSet *_tIdSet;
}

+ (void)findVRNode:(id)arg1 vrNode:(id)arg2 viewNode:(id)arg3 allNodes:(id)arg4 view:(id)arg5 tag:(CDUnknownBlockType)arg6;
+ (id)getView:(id)arg1 tag:(long long)arg2;
@property(retain, nonatomic) NSMutableSet *tIdSet; // @synthesize tIdSet=_tIdSet;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *biz; // @synthesize biz=_biz;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSDictionary *tplIdMap; // @synthesize tplIdMap=_tplIdMap;
@property(copy, nonatomic) NSString *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSMutableDictionary *bodyLayoutDict; // @synthesize bodyLayoutDict=_bodyLayoutDict;
@property(retain) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain) NSMutableArray *originDataArray; // @synthesize originDataArray=_originDataArray;
@property(copy, nonatomic) NSString *sceneName; // @synthesize sceneName=_sceneName;
- (void).cxx_destruct;
- (void)clearAllDatas;
- (id)bindingPathsWithTid:(id)arg1;
- (id)loadTemplateWithId:(id)arg1 forceDisk:(_Bool)arg2;
- (_Bool)matchingTemplate:(id)arg1;
- (id)calculateLayoutInfo:(id)arg1 originData:(id)arg2;
- (void)calculateLayoutInfos:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)validate:(id)arg1;
- (void)bindData:(id)arg1;
- (void)layout:(id)arg1;
- (id)subViewFor:(id)arg1 withMFTag:(unsigned long long)arg2 withNode:(id)arg3;
- (void)attachVirtualNode:(id)arg1 toView:(id)arg2;
- (id)buildUIWithTableView:(id)arg1 className:(id)arg2 data:(id)arg3 virtualNode:(id)arg4 headFooter:(_Bool)arg5;
- (double)cellHeightWithVirtualNodes:(id)arg1;
- (id)virtualNodeWithTid:(id)arg1 uuid:(id)arg2 dataSource:(id)arg3 originData:(id)arg4;
- (id)domWithTid:(id)arg1 uuid:(id)arg2;
- (id)templateWithTid:(id)arg1;
- (id)mapTplIdWithTid:(id)arg1;
- (id)initWithSceneName:(id)arg1 tIdSet:(id)arg2 filePath:(id)arg3 manifest:(id)arg4;
- (id)initWithSceneName:(id)arg1 tIdSet:(id)arg2 appId:(id)arg3 biz:(id)arg4 manifest:(id)arg5;
- (id)getViewWithNode:(id)arg1 cell:(id)arg2;
- (id)preloadCell:(id)arg1 nowRefreshIndexPath:(id)arg2;
- (void)preloadUIWithPreloadPath:(id)arg1 vrtabelView:(id)arg2;
- (void)hiddenSubView:(id)arg1;
- (id)prepareUIWithTableView:(id)arg1 className:(id)arg2 data:(id)arg3 virtualNode:(id)arg4 headFooter:(_Bool)arg5 indexPath:(id)arg6 vc:(id)arg7;

@end


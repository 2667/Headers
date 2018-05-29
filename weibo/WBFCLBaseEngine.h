//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, WBResultSet, WBStatusData;

@interface WBFCLBaseEngine : NSObject
{
    WBStatusData *_statusData;
    NSMutableDictionary *_userInfo;
    WBResultSet *_resultSet;
    unsigned long long _loadState;
}

@property(readonly, nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(readonly, nonatomic) WBResultSet *resultSet; // @synthesize resultSet=_resultSet;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) WBStatusData *statusData; // @synthesize statusData=_statusData;
- (void).cxx_destruct;
- (unsigned long long)parseDomain;
- (_Bool)isRootLevelItem:(id)arg1;
- (void)deleteAllItems;
- (void)deleteItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_deleteItem:(id)arg1 inContainer:(id)arg2;
- (void)_insertItem:(id)arg1 atIndex:(unsigned long long)arg2 inContainer:(id)arg3;
- (void)_makeSubLevelItem:(id)arg1 disassembleFrom:(id)arg2;
- (void)_makeRootLevelItem:(id)arg1 disassembleFrom:(id)arg2;
- (void)_makeSubLevelItem:(id)arg1 assembleTo:(id)arg2 assembleIndex:(long long)arg3 removeIndexItem:(_Bool)arg4;
- (void)_makeRootLevelItems:(id)arg1 assembleTo:(id)arg2 assembleIndex:(long long)arg3 removeIndexItem:(_Bool)arg4;
- (void)_makeRootLevelItem:(id)arg1 disintegrateTo:(id)arg2;
- (void)_makeCellulars:(id)arg1 offset:(long long)arg2;
- (void)_resetCellularsUILogic:(id)arg1;
- (id)_getCellularArrayWithSegment:(struct _NSRange)arg1 inContainer:(id)arg2;
- (id)_createCellularArrayOfRootLevelItem:(id)arg1;
- (void)insertDataWithParams:(id)arg1 withOccupiedItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreDataWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadDataWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end


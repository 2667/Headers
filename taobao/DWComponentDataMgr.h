//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface DWComponentDataMgr : NSObject
{
    NSMutableArray *_instancePairList;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *instancePairList; // @synthesize instancePairList=_instancePairList;
- (void).cxx_destruct;
- (id)getAnotherInstanceWith:(id)arg1;
- (_Bool)instancePairContainsPair:(id)arg1;
- (void)addInstancePairToListLandScape:(id)arg1 andPortrait:(id)arg2;
- (void)clearAllData;

@end


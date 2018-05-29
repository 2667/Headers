//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WBTDFMDatabaseQueue;

@interface WeiboDao : NSObject
{
    WBTDFMDatabaseQueue *dbQueue;
}

@property(retain, nonatomic) WBTDFMDatabaseQueue *dbQueue; // @synthesize dbQueue;
- (void).cxx_destruct;
- (void)updataLastTimeForHotwordTitle:(id)arg1 Time:(int)arg2;
- (void)saveAryToHotword:(id)arg1;
- (void)insertToHotword:(id)arg1;
- (void)checkAndAssureHotwordSize;
- (int)getRepeatTitleHotword:(id)arg1;
- (void)clearTable:(id)arg1;
- (unsigned char)tableHasData:(id)arg1;
- (id)getExtraInfoValueForKey:(id)arg1;
- (void)setExtraInfoValue:(id)arg1 forKey:(id)arg2;
- (id)initWithDdQueue:(id)arg1;
- (id)getCommonCommentsAtPage:(int)arg1 pageCount:(int)arg2 type:(id)arg3;
- (id)getCommentsAtPage:(int)arg1 pageCount:(int)arg2 type:(id)arg3;
- (id)getStatusesAtPage:(int)arg1 pageCount:(int)arg2 lastUpdateTime:(id)arg3 type:(id)arg4;
- (id)getStatusesAtPage:(int)arg1 pageCount:(int)arg2 lastUpdateTime:(id)arg3 type:(id)arg4 statusClass:(Class)arg5;
- (void)deleteComment:(id)arg1 type:(id)arg2;
- (void)deleteTrend:(id)arg1 type:(id)arg2;
- (void)deleteStatus:(id)arg1 type:(id)arg2;

@end


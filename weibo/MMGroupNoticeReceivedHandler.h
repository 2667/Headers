//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMEventHandler.h"

@class MMGroupNotice, NSMutableArray;

@interface MMGroupNoticeReceivedHandler : MMEventHandler
{
    MMGroupNotice *_groupNotice;
    NSMutableArray *_needFetchUsers;
}

@property(retain, nonatomic) NSMutableArray *needFetchUsers; // @synthesize needFetchUsers=_needFetchUsers;
@property(retain, nonatomic) MMGroupNotice *groupNotice; // @synthesize groupNotice=_groupNotice;
- (void).cxx_destruct;
- (void)postHandling:(id)arg1;
- (_Bool)databaseHandling:(id)arg1;
- (_Bool)preHandling;
- (void)dealloc;

@end


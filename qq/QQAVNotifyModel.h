//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQAVNotifyModel_MsgHeader, QQAVNotifyModel_RejectNotify;

@interface QQAVNotifyModel : NSObject
{
    QQAVNotifyModel_MsgHeader *_msgHeader;
    QQAVNotifyModel_RejectNotify *_rejectNotify;
}

@property(retain, nonatomic) QQAVNotifyModel_RejectNotify *rejectNotify; // @synthesize rejectNotify=_rejectNotify;
@property(retain, nonatomic) QQAVNotifyModel_MsgHeader *msgHeader; // @synthesize msgHeader=_msgHeader;
- (void)dealloc;

@end


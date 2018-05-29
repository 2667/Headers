//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOpenUrlContextBase.h"

#import "WBContactRecentPickerViewControllerDelegate-Protocol.h"

@class NSString, WBShareContent;

@interface WBOpenUrlShareToWeiyouContext : WBOpenUrlContextBase <WBContactRecentPickerViewControllerDelegate>
{
    WBShareContent *_shareContent;
}

@property(retain, nonatomic) WBShareContent *shareContent; // @synthesize shareContent=_shareContent;
- (void).cxx_destruct;
- (void)contactRecentPickerViewControllerDidDismiss:(id)arg1;
- (void)shareToPrivateMessage:(id)arg1;
- (void)contactRecentPickerViewController:(id)arg1 shareToPrivateMessageWithUserTarget:(id)arg2;
- (id)topController;
- (void)shareToPrivateMessageAndGroup:(long long)arg1 content:(id)arg2;
- (void)startContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AutoTransferCheckSmsController.h"

@class APWealthRpcCaller;

@interface AutoTransferOutCheckSmsViewController : AutoTransferCheckSmsController
{
    APWealthRpcCaller *_rpcCaller;
}

@property(retain, nonatomic) APWealthRpcCaller *rpcCaller; // @synthesize rpcCaller=_rpcCaller;
- (void).cxx_destruct;
- (void)submitButtonClick;
- (void)sendAuthSMS;
- (void)viewDidLoad;

@end


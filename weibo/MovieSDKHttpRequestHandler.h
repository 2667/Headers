//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MovieSDKHttpRequest;

@interface MovieSDKHttpRequestHandler : NSObject
{
    _Bool _isCanceled;
    MovieSDKHttpRequest *_request;
}

@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(retain, nonatomic) MovieSDKHttpRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol GetMidiaListDelegate;

@interface GetARMediaList : NSObject
{
    id <GetMidiaListDelegate> _getMidiaListDelegate;
}

@property(nonatomic) __weak id <GetMidiaListDelegate> getMidiaListDelegate; // @synthesize getMidiaListDelegate=_getMidiaListDelegate;
- (void).cxx_destruct;
- (void)getMediaList:(id)arg1 touin:(id)arg2 shareId:(id)arg3 bytes_rsp_page_cookies:(id)arg4 taskID:(unsigned long long)arg5;

@end


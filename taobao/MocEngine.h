//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MocWeexListView;

@interface MocEngine : NSObject
{
    MocWeexListView *_weexListView;
}

@property(retain, nonatomic) MocWeexListView *weexListView; // @synthesize weexListView=_weexListView;
- (void).cxx_destruct;
- (id)getJsWithUrl:(id)arg1;
- (void)dealloc;
- (id)getListView;
- (id)initWithFrame:(struct CGRect)arg1 jsUrl:(id)arg2 defaultJs:(id)arg3 config:(id)arg4;

@end

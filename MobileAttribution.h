//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AppsFlyerTrackerDelegate-Protocol.h"

@class NSString;

@interface MobileAttribution : NSObject <AppsFlyerTrackerDelegate>
{
}

+ (id)sharedAttribution;
- (void)onConversionDataReceived:(id)arg1;
- (void)sendEvent:(id)arg1 withParams:(id)arg2;
- (void)setUserID:(id)arg1;
- (void)setAppInfo:(id)arg1 appID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


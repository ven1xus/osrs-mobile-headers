//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MobileAuthConfiguration, MobileAuthStateManager;

@interface BillingApis : NSObject
{
    MobileAuthStateManager *m_authStateManager;
    MobileAuthConfiguration *m_mobileAuthConfig;
}

- (void).cxx_destruct;
- (id)getAcceptResolutionHeader;
- (void)lookupTransactions:(id)arg1 response:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)completeTransaction:(id)arg1 response:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3 complete:(CDUnknownBlockType)arg4;
- (void)getRXPackages:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (id)initWithConfigurationAndMobileAuthState:(id)arg1 mobileAuthState:(id)arg2;

@end


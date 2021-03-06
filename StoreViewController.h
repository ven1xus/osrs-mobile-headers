//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PackageScrollViewDelagate-Protocol.h"
#import "StorePresenterDelegate-Protocol.h"
#import "ToggleProgressViewDelegate-Protocol.h"

@class MobileAuthConfiguration, NSLayoutConstraint, PackageScrollView, StoreViewPresenter, UIButton, UIImageView, UIScrollView, UIView;

@interface StoreViewController : UIViewController <PackageScrollViewDelagate, StorePresenterDelegate, ToggleProgressViewDelegate>
{
    PackageScrollView *packageListView;
    StoreViewPresenter *storePresenter;
    CDUnknownBlockType errorHandler;
    _Bool _showOnly;
    UIView *_collapseButtonView;
    UIScrollView *_packageScrollView;
    NSLayoutConstraint *_scrollViewRightMargin;
    NSLayoutConstraint *_scrollViewLeftMargin;
    NSLayoutConstraint *_homeButtonLeftMargin;
    NSLayoutConstraint *_closeButtonRightMargin;
    NSLayoutConstraint *_scrollViewTopMargin;
    NSLayoutConstraint *_logoTopMargin;
    UIButton *_closeButton;
    UIImageView *_logo;
    UIImageView *_storeBackground;
    MobileAuthConfiguration *_mobileAuthConfig;
    long long _categoryID;
}

@property(nonatomic) _Bool showOnly; // @synthesize showOnly=_showOnly;
@property(nonatomic) long long categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) MobileAuthConfiguration *mobileAuthConfig; // @synthesize mobileAuthConfig=_mobileAuthConfig;
@property(nonatomic) __weak UIImageView *storeBackground; // @synthesize storeBackground=_storeBackground;
@property(nonatomic) __weak UIImageView *logo; // @synthesize logo=_logo;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak NSLayoutConstraint *logoTopMargin; // @synthesize logoTopMargin=_logoTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *scrollViewTopMargin; // @synthesize scrollViewTopMargin=_scrollViewTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *closeButtonRightMargin; // @synthesize closeButtonRightMargin=_closeButtonRightMargin;
@property(nonatomic) __weak NSLayoutConstraint *homeButtonLeftMargin; // @synthesize homeButtonLeftMargin=_homeButtonLeftMargin;
@property(nonatomic) __weak NSLayoutConstraint *scrollViewLeftMargin; // @synthesize scrollViewLeftMargin=_scrollViewLeftMargin;
@property(nonatomic) __weak NSLayoutConstraint *scrollViewRightMargin; // @synthesize scrollViewRightMargin=_scrollViewRightMargin;
@property(nonatomic) __weak UIScrollView *packageScrollView; // @synthesize packageScrollView=_packageScrollView;
@property(nonatomic) __weak UIView *collapseButtonView; // @synthesize collapseButtonView=_collapseButtonView;
- (void).cxx_destruct;
- (void)closeShopWithMessage:(id)arg1 andTitle:(id)arg2;
- (void)onPackagesLoaded:(id)arg1;
- (void)onIncompleteTransactionsAvailable;
- (void)onReportError:(id)arg1;
- (void)onShopLoadedWithBackground:(id)arg1 logo:(id)arg2;
- (void)adjustCollapsedMargin:(unsigned char)arg1 itemsCount:(long long)arg2;
- (void)onItemPurchased:(id)arg1;
- (void)toggleProgressView:(_Bool)arg1 blockUserInteraction:(_Bool)arg2;
- (void)toggleProgressView:(_Bool)arg1;
- (void)onPackageExpandCollapse:(_Bool)arg1;
- (void)onDisplayMessage:(id)arg1 message:(id)arg2;
- (void)collapsePackages:(id)arg1;
- (void)returnBackToGame:(id)arg1;
- (void)didReceiveMemoryWarning;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setFailureResponder:(CDUnknownBlockType)arg1;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end


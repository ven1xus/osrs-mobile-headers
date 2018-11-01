//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, PackageItemsViewController, UIButton, UICollectionView, UIImageView, UILabel, UIView;

@interface PackageCollectionViewCell : UICollectionViewCell
{
    PackageItemsViewController *itemsViewController;
    UIImageView *_packageBackground;
    UILabel *_packageTitle;
    UILabel *_packageDescriptionBackground;
    UILabel *_legalText;
    UIButton *_termsCondition;
    UIButton *_privacyPolicy;
    UILabel *_packageDescription;
    UICollectionView *_productCollectionView;
    UIView *_collapseDetailsView;
    UILabel *_collapsedTitle;
    UILabel *_shortDescription;
    UIView *_showMoreProducts;
    NSLayoutConstraint *_showMoreProductsLeadingSpace;
    NSLayoutConstraint *_showMoreProductsTrailingSpace;
    NSLayoutConstraint *_showMoreProductsTopSpace;
    NSLayoutConstraint *_showMoreProductsBottomSpace;
    NSLayoutConstraint *_productsViewRightSpace;
    NSLayoutConstraint *_productsViewTopSpace;
    NSLayoutConstraint *_packageTitleTopSpace;
    NSLayoutConstraint *_packageDescriptionTopSpace;
    UILabel *_morePackageText;
    UILabel *_plusMark;
    UIButton *_showMoreProductBtn;
}

@property(nonatomic) __weak UIButton *showMoreProductBtn; // @synthesize showMoreProductBtn=_showMoreProductBtn;
@property(nonatomic) __weak UILabel *plusMark; // @synthesize plusMark=_plusMark;
@property(nonatomic) __weak UILabel *morePackageText; // @synthesize morePackageText=_morePackageText;
@property(nonatomic) __weak NSLayoutConstraint *packageDescriptionTopSpace; // @synthesize packageDescriptionTopSpace=_packageDescriptionTopSpace;
@property(nonatomic) __weak NSLayoutConstraint *packageTitleTopSpace; // @synthesize packageTitleTopSpace=_packageTitleTopSpace;
@property(nonatomic) __weak NSLayoutConstraint *productsViewTopSpace; // @synthesize productsViewTopSpace=_productsViewTopSpace;
@property(nonatomic) __weak NSLayoutConstraint *productsViewRightSpace; // @synthesize productsViewRightSpace=_productsViewRightSpace;
@property(nonatomic) __weak NSLayoutConstraint *showMoreProductsBottomSpace; // @synthesize showMoreProductsBottomSpace=_showMoreProductsBottomSpace;
@property(nonatomic) __weak NSLayoutConstraint *showMoreProductsTopSpace; // @synthesize showMoreProductsTopSpace=_showMoreProductsTopSpace;
@property(nonatomic) __weak NSLayoutConstraint *showMoreProductsTrailingSpace; // @synthesize showMoreProductsTrailingSpace=_showMoreProductsTrailingSpace;
@property(nonatomic) __weak NSLayoutConstraint *showMoreProductsLeadingSpace; // @synthesize showMoreProductsLeadingSpace=_showMoreProductsLeadingSpace;
@property(nonatomic) __weak UIView *showMoreProducts; // @synthesize showMoreProducts=_showMoreProducts;
@property(nonatomic) __weak UILabel *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(nonatomic) __weak UILabel *collapsedTitle; // @synthesize collapsedTitle=_collapsedTitle;
@property(nonatomic) __weak UIView *collapseDetailsView; // @synthesize collapseDetailsView=_collapseDetailsView;
@property(nonatomic) __weak UICollectionView *productCollectionView; // @synthesize productCollectionView=_productCollectionView;
@property(nonatomic) __weak UILabel *packageDescription; // @synthesize packageDescription=_packageDescription;
@property(nonatomic) __weak UIButton *privacyPolicy; // @synthesize privacyPolicy=_privacyPolicy;
@property(nonatomic) __weak UIButton *termsCondition; // @synthesize termsCondition=_termsCondition;
@property(nonatomic) __weak UILabel *legalText; // @synthesize legalText=_legalText;
@property(nonatomic) __weak UILabel *packageDescriptionBackground; // @synthesize packageDescriptionBackground=_packageDescriptionBackground;
@property(nonatomic) __weak UILabel *packageTitle; // @synthesize packageTitle=_packageTitle;
@property(nonatomic) __weak UIImageView *packageBackground; // @synthesize packageBackground=_packageBackground;
@property(retain, nonatomic) PackageItemsViewController *itemsViewController; // @synthesize itemsViewController;
- (void).cxx_destruct;
- (void)handlePrivacy:(id)arg1;
- (void)handleTerms:(id)arg1;
- (void)showMoreProducts:(id)arg1;
- (void)showFewerProducts:(id)arg1;
- (void)hideRevealProducts:(id)arg1;
- (void)awakeFromNib;

@end

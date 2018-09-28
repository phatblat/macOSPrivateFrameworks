//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/ColorInvertingTableCellView.h>

@class NSImageView, NSLayoutConstraint, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface CredentialCompletionAutoFillCellView : ColorInvertingTableCellView
{
    NSString *_userNameDescription;
    NSString *_credentialOriginDescription;
    NSTextField *_userNameDescriptionLabel;
    NSTextField *_credentialOriginDescriptionLabel;
    NSImageView *_trailingImageView;
    NSLayoutConstraint *_stackViewLeadingConstraint;
    NSLayoutConstraint *_stackViewTrailingConstraint;
}

+ (struct CGSize)sizeWithUserNameDescription:(id)arg1 origin:(id)arg2;
@property(nonatomic) __weak NSLayoutConstraint *stackViewTrailingConstraint; // @synthesize stackViewTrailingConstraint=_stackViewTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *stackViewLeadingConstraint; // @synthesize stackViewLeadingConstraint=_stackViewLeadingConstraint;
@property(nonatomic) __weak NSImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(nonatomic) __weak NSTextField *credentialOriginDescriptionLabel; // @synthesize credentialOriginDescriptionLabel=_credentialOriginDescriptionLabel;
@property(nonatomic) __weak NSTextField *userNameDescriptionLabel; // @synthesize userNameDescriptionLabel=_userNameDescriptionLabel;
@property(copy, nonatomic) NSString *credentialOriginDescription; // @synthesize credentialOriginDescription=_credentialOriginDescription;
@property(copy, nonatomic) NSString *userNameDescription; // @synthesize userNameDescription=_userNameDescription;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end


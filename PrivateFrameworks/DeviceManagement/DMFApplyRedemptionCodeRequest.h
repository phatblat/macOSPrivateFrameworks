//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSString;

@interface DMFApplyRedemptionCodeRequest : CATTaskRequest
{
    NSString *_code;
    NSString *_bundleIdentifier;
    NSString *_message;
    NSString *_installationFailureMessage;
    NSString *_dismissButtonText;
    NSString *_installButtonText;
    NSString *_cancelButtonText;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(copy, nonatomic) NSString *installButtonText; // @synthesize installButtonText=_installButtonText;
@property(copy, nonatomic) NSString *dismissButtonText; // @synthesize dismissButtonText=_dismissButtonText;
@property(copy, nonatomic) NSString *installationFailureMessage; // @synthesize installationFailureMessage=_installationFailureMessage;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


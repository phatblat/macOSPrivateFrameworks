//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField
{
}

- (unsigned long long)fieldType;
- (BOOL)submissionStringMeetsAllRequirements;
- (id)submissionString;
- (id)displayString;
@property(readonly, copy, nonatomic) NSString *title;
- (void)setCurrentValue:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class NSString;

@interface WFNFCTrigger : WFTrigger
{
    NSString *_tagIdentifier;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (BOOL)isSupportedOnThisDevice;
+ (BOOL)isAllowedToRunAutomatically;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *tagIdentifier; // @synthesize tagIdentifier=_tagIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (BOOL)hasValidConfiguration;

@end

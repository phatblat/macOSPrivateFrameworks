//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableDescription.h>

@class NSArray;

@interface INRootCodableDescription : INCodableDescription
{
    NSArray *_referencedCodableDescriptions;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic, setter=_setReferencedCodableDescriptions:) NSArray *referencedCodableDescriptions; // @synthesize referencedCodableDescriptions=_referencedCodableDescriptions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

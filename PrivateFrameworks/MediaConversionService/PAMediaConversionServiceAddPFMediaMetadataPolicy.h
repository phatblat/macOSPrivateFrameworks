//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@interface PAMediaConversionServiceAddPFMediaMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    unsigned char _type;
    id _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithType:(unsigned char)arg1 value:(id)arg2;
@property(retain) id value; // @synthesize value=_value;
@property unsigned char type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)processMetadata:(id)arg1;
- (BOOL)metadataNeedsProcessing:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

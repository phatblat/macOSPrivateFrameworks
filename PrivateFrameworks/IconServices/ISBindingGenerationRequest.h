//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IconServices/ISGenerationRequest.h>

@class NSUUID;

@interface ISBindingGenerationRequest : ISGenerationRequest
{
    struct _LSBinding *_binding;
    NSUUID *_resourceUUID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) struct _LSBinding *binding; // @synthesize binding=_binding;
- (void).cxx_destruct;
- (id)description;
- (id)fallbackType;
- (BOOL)isImageNullable;
- (BOOL)checkValidationToken:(CDStruct_cbacfc36 *)arg1;
- (CDStruct_cbacfc36)validationToken;
- (void)enumerateIconResourceInfoWithOptions:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)resourceUUID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinding:(struct _LSBinding *)arg1 size:(struct CGSize)arg2 scale:(unsigned int)arg3;
- (id)initWithBinding:(struct _LSBinding *)arg1 size:(struct CGSize)arg2 scale:(unsigned int)arg3 options:(id)arg4;

@end


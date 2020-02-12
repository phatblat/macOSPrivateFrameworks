//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSMutableArray;

@interface KextAuditIntelBootSession : NSObject <NSSecureCoding>
{
    unsigned char _csrStatus;
    _Bool _sipStatus;
    _Bool _secureBoot;
    _Bool _valid;
    unsigned int _csrConfig;
    unsigned int _imkTypeTag;
    int _instanceTag;
    NSData *_kernelCDHash;
    NSMutableArray *_kexts;
    NSMutableArray *_errors;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) int instanceTag; // @synthesize instanceTag=_instanceTag;
@property(retain) NSMutableArray *errors; // @synthesize errors=_errors;
@property(retain) NSMutableArray *kexts; // @synthesize kexts=_kexts;
@property(retain) NSData *kernelCDHash; // @synthesize kernelCDHash=_kernelCDHash;
@property _Bool valid; // @synthesize valid=_valid;
@property _Bool secureBoot; // @synthesize secureBoot=_secureBoot;
@property _Bool sipStatus; // @synthesize sipStatus=_sipStatus;
@property unsigned int imkTypeTag; // @synthesize imkTypeTag=_imkTypeTag;
@property unsigned int csrConfig; // @synthesize csrConfig=_csrConfig;
@property unsigned char csrStatus; // @synthesize csrStatus=_csrStatus;
- (void).cxx_destruct;
- (void)invalidate:(id)arg1;
- (_Bool)hasKernel;
- (_Bool)isValid;
- (int)addKext:(id)arg1;
- (void)reset;
- (_Bool)xpcDictionary:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initAsValid:(_Bool)arg1 withKernelHash:(id)arg2 andKexts:(id)arg3 andErrors:(id)arg4 andSIPStatus:(_Bool)arg5 andSecureBootStatus:(_Bool)arg6 andCSRConfigStatus:(unsigned char)arg7 andCSRConfig:(unsigned int)arg8 andTypeTag:(unsigned int)arg9;
- (id)init;

@end


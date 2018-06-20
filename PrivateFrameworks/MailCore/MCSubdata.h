//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface MCSubdata : NSData
{
    NSData *_parentData;
    struct _NSRange _subrange;
}

@property(retain, nonatomic) NSData *parentData; // @synthesize parentData=_parentData;
@property(nonatomic) struct _NSRange subrange; // @synthesize subrange=_subrange;
- (void).cxx_destruct;
- (const void *)bytes;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;
- (id)initWithParent:(id)arg1 range:(struct _NSRange)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface WBSFaviconProviderIconInfo : NSObject
{
    BOOL _hasGeneratedResolutions;
    BOOL _isRejectedResource;
    NSString *_pageURLString;
    NSString *_iconURLString;
    NSString *_UUIDString;
    NSDate *_dateAdded;
    struct CGSize _size;
}

@property(readonly, nonatomic) BOOL isRejectedResource; // @synthesize isRejectedResource=_isRejectedResource;
@property(readonly, nonatomic) BOOL hasGeneratedResolutions; // @synthesize hasGeneratedResolutions=_hasGeneratedResolutions;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(readonly, copy, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(readonly, copy, nonatomic) NSString *pageURLString; // @synthesize pageURLString=_pageURLString;
- (void).cxx_destruct;
- (id)initWithPageURLString:(id)arg1 iconURLString:(id)arg2 UUIDString:(id)arg3 dateAdded:(id)arg4 size:(struct CGSize)arg5 hasGeneratedResolutions:(BOOL)arg6 isRejectedResource:(BOOL)arg7;
- (id)init;

@end

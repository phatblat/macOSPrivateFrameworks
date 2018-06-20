//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PKDistributionChoiceItem.h"

@class NSString;

@interface OSISyntheticChoice : PKDistributionChoiceItem
{
    BOOL _enabled;
    BOOL _canBeDisabled;
    NSString *_identifier;
    long long _cellState;
}

- (void).cxx_destruct;
- (id)identifier;
- (BOOL)visible;
- (BOOL)startSelected;
- (id)visibleChildren;
- (id)packageReferencesToInstallIgnoringChildren;
- (id)packageReferencesToInstall;
- (long long)state;
- (void)setState:(long long)arg1;
- (BOOL)canBeDisabled;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (id)choice;
- (id)initWithChoiceItems:(id)arg1 title:(id)arg2 identifier:(id)arg3 canBeDisabled:(BOOL)arg4;

@end


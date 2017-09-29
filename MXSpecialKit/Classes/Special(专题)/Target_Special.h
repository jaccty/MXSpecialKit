//
//  Target_Special.h
//  Pods
//
//  Created by Micheal Xiao on 2017/9/28.
//

#import <Foundation/Foundation.h>

#import"MXSpecialKit.h"

@interface Target_Special :NSObject
    
- (UIViewController*)Action_specialDetailViewController:(NSDictionary*)params;
    
- (NSDictionary*)Action_specialReformerWithOriginData:(NSDictionary*)params;
    
- (NSDictionary *)Action_specialReformer:(NSDictionary*)params;
    
- (APIRequest*)Action_specialAPIRequest:(NSDictionary*)params;
    
@end


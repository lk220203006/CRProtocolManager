//
//  CRProtocolManager.h
//  CRProtocolManager
//
//  Created by 11160221040036 on 2018/11/28.
//  Copyright © 2018年 liukun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CRProtocolManager : NSObject

+ (void)registServiceProvide:(id)provide forProtocol:(Protocol*)protocol;

+ (id)serviceProvideForProtocol:(Protocol *)protocol;

@end

name = summonpetLevelUp.proto

package pb;

message summonpetLevelUp {
    repeated t_summonpet_lv_config datas = 1;    // type_name = .pb.summonpetLevelUp.t_summonpet_lv_config

    message t_summonpet_lv_config {
        required uint32 tbxid = 1 [default = 0];
        required uint32 id = 2 [default = 0];
        required uint32 levelupexp = 3;
    }
}

----- table version -----
["message_type"] = {
    [1] = {
        ["field"] = {
            [1] = {
                ["number"] = 1,
                ["label"] = "LABEL_REPEATED",
                ["type"] = "TYPE_MESSAGE",
                ["type_name"] = ".pb.summonpetLevelUp.t_summonpet_lv_config",
                ["name"] = "datas"
            }
        },
        ["name"] = "summonpetLevelUp",
        ["nested_type"] = {
            [1] = {
                ["name"] = "t_summonpet_lv_config",
                ["field"] = {
                    [1] = {
                        ["number"] = 1,
                        ["default_value"] = "0",
                        ["label"] = "LABEL_REQUIRED",
                        ["type"] = "TYPE_UINT32",
                        ["name"] = "tbxid"
                    },
                    [2] = {
                        ["number"] = 2,
                        ["default_value"] = "0",
                        ["label"] = "LABEL_REQUIRED",
                        ["type"] = "TYPE_UINT32",
                        ["name"] = "id"
                    },
                    [3] = {
                        ["number"] = 3,
                        ["type"] = "TYPE_UINT32",
                        ["name"] = "levelupexp",
                        ["label"] = "LABEL_REQUIRED"
                    }
                }
            }
        }
    }
},
["name"] = "summonpetLevelUp.proto",
["package"] = "pb"

----- end of proto -----
